//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ATConnection;

@interface SBModelessSyncController : NSObject
{
    _Bool _isAppSyncing;
    _Bool _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    _Bool _restoringFromICloud;
    _Bool _isAutoSyncing;
    _Bool _isWirelessSyncing;
    ATConnection *_airTrafficConnection;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool isSyncing; // @synthesize isSyncing=_isSyncing;
@property(readonly, nonatomic) _Bool isAppSyncing; // @synthesize isAppSyncing=_isAppSyncing;
- (void).cxx_destruct;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
@property(readonly, nonatomic) _Bool isRestoringFromICloud;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(_Bool)arg1;
- (void)_appSyncStateChanged;
- (void)gotLowBatteryWarning;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)connectionWasInterrupted:(id)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
@property(readonly, nonatomic) _Bool isWirelessSyncing; // @synthesize isWirelessSyncing=_isWirelessSyncing;
@property(readonly, nonatomic) _Bool isAutoSyncing; // @synthesize isAutoSyncing=_isAutoSyncing;
- (void)setIsSyncing:(_Bool)arg1;
- (void)dealloc;
- (id)init;

@end

