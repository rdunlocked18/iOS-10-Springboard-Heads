//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBLockScreenBatteryChargingView.h"

@class SBLockScreenBatteryFillView, SBUILegibilityLabel, UIImageView, UIView, _UIBackdropView;

@interface _SBLockScreenDoubleBatteryChargingView : SBLockScreenBatteryChargingView
{
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    SBLockScreenBatteryFillView *_internalBatteryFillView;
    SBLockScreenBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (void).cxx_destruct;
- (id)_chargePercentFont;
- (double)_deviceChargeBaselineOffset;
- (double)_deviceNameBaselineOffset;
- (double)_chargingBoltTopOffset;
- (double)_batteryTopPadding;
- (double)_spaceBetweenBatteryImages;
- (void)layoutSubviews;
- (void)setSecondaryLabelText:(id)arg1 forBattery:(id)arg2;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setLegibilitySettings:(id)arg1;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (_Bool)batteryVisible;
- (id)initWithFrame:(struct CGRect)arg1;

@end

