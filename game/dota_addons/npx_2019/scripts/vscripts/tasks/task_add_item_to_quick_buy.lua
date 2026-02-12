require( "npx_task" ) 

----------------------------------------------------------------------------

if CDotaNPXTask_AddItemToQuickBuy == nil then
	CDotaNPXTask_AddItemToQuickBuy = class( {}, {}, CDotaNPXTask )
end

----------------------------------------------------------------------------
-- DoneItemName is optional and is for if you need to check for a different 
-- item added to the quick menu than you are asking for.
-- This is used when you try and add an object that is a recipe, as it will
-- add its components rather than itself.

function CDotaNPXTask_AddItemToQuickBuy:RegisterTaskEvent()
	self.szItemName = self.hTaskInfo.TaskParams.ItemName
	self.szDoneItemName = self.hTaskInfo.TaskParams[self.hTaskInfo.TaskParams["DoneItemName"] ~= nil and "DoneItemName" or "ItemName"]

	GameRules:SetWhiteListEnabled( true )
	GameRules:AddItemToWhiteList( self.szItemName )

	self.nTaskListener = ListenToGameEvent( "dota_quick_buy_changed", Dynamic_Wrap( CDotaNPXTask_AddItemToQuickBuy, "OnPlayerSetQuickBuy" ), self )
end

--------------------------------------------------------------------------------
-- dota_quick_buy_changed
-- > item - string
--------------------------------------------------------------------------------
function CDotaNPXTask_AddItemToQuickBuy:OnPlayerSetQuickBuy( event )
	if event.item == self.szDoneItemName then
		self:CompleteTask( true )
	end
end

----------------------------------------------------------------------------

function CDotaNPXTask_AddItemToQuickBuy:UnregisterTaskEvent()
	GameRules:SetWhiteListEnabled( false )
	GameRules:RemoveItemFromWhiteList( self.szItemName  )		
	StopListeningToGameEvent( self.nTaskListener )
	
	CDotaNPXTask.UnregisterTaskEvent( self )
end


----------------------------------------------------------------------------

return CDotaNPXTask_AddItemToQuickBuy