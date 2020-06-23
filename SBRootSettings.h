//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@class CCUIControlCenterSettings, SBAlertItemsSettings, SBAnimationFactorySettings, SBAppIconForceTouchSettings, SBAppParallaxSettings, SBAppSwitcherSettings, SBCarDisplaySettings, SBFWallpaperSettings, SBFadeAnimationSettings, SBFolderSettings, SBHarmonySettings, SBHomeButtonSettings, SBIconColorSettings, SBIrisWallpaperSettings, SBLegibilitySettings, SBLockScreenSettings, SBLockScreenSlideUpAppSettings, SBLockScreenTestPluginSettings, SBMedusaSettings, SBNotificationCenterSettings, SBPrototypeControllerSettings, SBReachabilitySettings, SBRootAnimationSettings, SBSoftwareUpdateSettings, SBStatusBarStyleOverridesSettings;

@interface SBRootSettings : SBUISettings
{
    SBAppParallaxSettings *_parallaxSettings;
    SBFolderSettings *_folderSettings;
    SBRootAnimationSettings *_rootAnimationSettings;
    CCUIControlCenterSettings *_controlCenterSettings;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBLockScreenSettings *_lockScreenSettings;
    SBCarDisplaySettings *_carDisplaySettings;
    SBLockScreenTestPluginSettings *_lockScreenTestPluginSettings;
    SBIconColorSettings *_iconColorSettings;
    SBFadeAnimationSettings *_fadeAnimationSettings;
    SBAlertItemsSettings *_alertItemsSettings;
    SBNotificationCenterSettings *_notificationCenterSettings;
    SBLegibilitySettings *_legibilitySettings;
    SBFWallpaperSettings *_wallpaperSettings;
    SBIrisWallpaperSettings *_irisWallpaperSettings;
    SBAnimationFactorySettings *_animationSettings;
    SBHomeButtonSettings *_homeButtonSettings;
    SBLockScreenSlideUpAppSettings *_lockScreenSlideUpAppSettings;
    SBReachabilitySettings *_reachabilitySettings;
    SBMedusaSettings *_medusaSettings;
    SBStatusBarStyleOverridesSettings *_statusBarStyleOverridesSettings;
    SBSoftwareUpdateSettings *_softwareUpdateSettings;
    SBPrototypeControllerSettings *_prototypeControllerSettings;
    SBHarmonySettings *_harmonySettings;
    SBAppIconForceTouchSettings *_appIconForceTouchSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBAppIconForceTouchSettings *appIconForceTouchSettings; // @synthesize appIconForceTouchSettings=_appIconForceTouchSettings;
@property(retain) SBHarmonySettings *harmonySettings; // @synthesize harmonySettings=_harmonySettings;
@property(retain) SBPrototypeControllerSettings *prototypeControllerSettings; // @synthesize prototypeControllerSettings=_prototypeControllerSettings;
@property(retain) SBSoftwareUpdateSettings *softwareUpdateSettings; // @synthesize softwareUpdateSettings=_softwareUpdateSettings;
@property(retain) SBStatusBarStyleOverridesSettings *statusBarStyleOverridesSettings; // @synthesize statusBarStyleOverridesSettings=_statusBarStyleOverridesSettings;
@property(retain) SBMedusaSettings *medusaSettings; // @synthesize medusaSettings=_medusaSettings;
@property(retain) SBReachabilitySettings *reachabilitySettings; // @synthesize reachabilitySettings=_reachabilitySettings;
@property(retain) SBLockScreenSlideUpAppSettings *lockScreenSlideUpAppSettings; // @synthesize lockScreenSlideUpAppSettings=_lockScreenSlideUpAppSettings;
@property(retain) SBHomeButtonSettings *homeButtonSettings; // @synthesize homeButtonSettings=_homeButtonSettings;
@property(retain) SBAnimationFactorySettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(retain) SBIrisWallpaperSettings *irisWallpaperSettings; // @synthesize irisWallpaperSettings=_irisWallpaperSettings;
@property(retain) SBFWallpaperSettings *wallpaperSettings; // @synthesize wallpaperSettings=_wallpaperSettings;
@property(retain) SBLegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain) SBNotificationCenterSettings *notificationCenterSettings; // @synthesize notificationCenterSettings=_notificationCenterSettings;
@property(retain) SBAlertItemsSettings *alertItemsSettings; // @synthesize alertItemsSettings=_alertItemsSettings;
@property(retain) SBFadeAnimationSettings *fadeAnimationSettings; // @synthesize fadeAnimationSettings=_fadeAnimationSettings;
@property(retain) SBIconColorSettings *iconColorSettings; // @synthesize iconColorSettings=_iconColorSettings;
@property(retain) SBLockScreenTestPluginSettings *lockScreenTestPluginSettings; // @synthesize lockScreenTestPluginSettings=_lockScreenTestPluginSettings;
@property(retain) SBCarDisplaySettings *carDisplaySettings; // @synthesize carDisplaySettings=_carDisplaySettings;
@property(retain) SBLockScreenSettings *lockScreenSettings; // @synthesize lockScreenSettings=_lockScreenSettings;
@property(retain) SBAppSwitcherSettings *appSwitcherSettings; // @synthesize appSwitcherSettings=_appSwitcherSettings;
@property(retain) CCUIControlCenterSettings *controlCenterSettings; // @synthesize controlCenterSettings=_controlCenterSettings;
@property(retain) SBRootAnimationSettings *rootAnimationSettings; // @synthesize rootAnimationSettings=_rootAnimationSettings;
@property(retain) SBFolderSettings *folderSettings; // @synthesize folderSettings=_folderSettings;
@property(retain) SBAppParallaxSettings *parallaxSettings; // @synthesize parallaxSettings=_parallaxSettings;
- (void).cxx_destruct;
- (_Bool)_hasPreviousSettings;

@end

