// Copyright Erik Herlitz


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControlParams(const FWidgetControllerParams& WCParams)
{
	PlayerController = WCParams.PlayerController;
	PlayerState = WCParams.PlayerState;
	AbilitySystemComponent = WCParams.AbilitySystemComponent;
	AttributeSet = WCParams.AttributeSet;
}

void UAuraWidgetController::BroadcastInitialValues()
{
}
