//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPAVRoutingController, NSError;

@protocol MPAVRoutingControllerDelegate <NSObject>

@optional
- (void)routingControllerDidPauseFromActiveRouteChange:(MPAVRoutingController *)arg1;
- (void)routingController:(MPAVRoutingController *)arg1 didFailToPickRouteWithError:(NSError *)arg2;
- (void)routingControllerExternalScreenTypeDidChange:(MPAVRoutingController *)arg1;
- (void)routingControllerAvailableRoutesDidChange:(MPAVRoutingController *)arg1;
@end

