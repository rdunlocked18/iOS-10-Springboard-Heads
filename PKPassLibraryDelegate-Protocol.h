//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, PKCatalog, PKPassLibrary;

@protocol PKPassLibraryDelegate <NSObject>

@optional
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passLibrary:(PKPassLibrary *)arg1 removingPassesOfType:(unsigned long long)arg2 didFinishWithSuccess:(_Bool)arg3;
- (void)passLibrary:(PKPassLibrary *)arg1 removingPassesOfType:(unsigned long long)arg2 didUpdateWithProgress:(double)arg3;
- (void)passLibrary:(PKPassLibrary *)arg1 receivedUpdatedCatalog:(PKCatalog *)arg2 passes:(NSSet *)arg3;
@end

