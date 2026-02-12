require( "npx_task" ) 

----------------------------------------------------------------------------

if CDotaNPXTask_CourierRetrieveItem == nil then
	CDotaNPXTask_CourierRetrieveItem = class( {}, {}, CDotaNPXTask )
end

----------------------------------------------------------------------------

function CDotaNPXTask_CourierRetrieveItem:RegisterTaskEvent()
	self.ItemNames = self.hTaskInfo.TaskParams.ItemNames or {}
	self.nTaskListener = ListenToGameEvent( "dota_inventory_item_added", Dynamic_Wrap( CDotaNPXTask_CourierRetrieveItem, "OnInventoryItemAdded" ), self )
end

--------------------------------------------------------------------------------

function CDotaNPXTask_CourierRetrieveItem:RemoveItemFromRequiredList( itemName )
	for k,ItemName in pairs ( self.ItemNames ) do
		if ItemName == itemName then
			table.remove( self.ItemNames, k )
		end
	end

	if #self.ItemNames == 0 then
		self:CompleteTask()
	end
end

--------------------------------------------------------------------------------

function CDotaNPXTask_CourierRetrieveItem:StartTask()
	CDotaNPXTask.StartTask(self)

	if self.hScenario.hCourier ~= nil then
		for k,itemName in pairs( self.ItemNames ) do
			if self.hScenario.hCourier:FindItemInInventory( itemName ) ~= nil then
				print( itemName .. " is in the inventory.")
				self:RemoveItemFromRequiredList( itemName )
			end
		end
	end
end

--------------------------------------------------------------------------------
-- dota_inventory_item_added
-- > item_slot - short
-- > inventory_player_id - short
-- > itemname- string
-- > item_entindex - short
-- > inventory_parent_entindex - short
-- > is_courier - bool

--------------------------------------------------------------------------------
function CDotaNPXTask_CourierRetrieveItem:OnInventoryItemAdded( event )
	print( "CDotaNPXTask_CourierRetrieveItem:OnInventoryItemAdded" )
	if event.is_courier then	
		print( "Courier has item")
		local szItemName = event.itemname
		if szItemName == nil then
			return
		end
		print( "item named " .. event.itemname )
		self:RemoveItemFromRequiredList( szItemName )
	end
end

----------------------------------------------------------------------------

return CDotaNPXTask_CourierRetrieveItem