//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBIsolationManager : NSObject
{
    NSMutableDictionary *_identifiersToViewControllers;
    NSMutableDictionary *_identifiersToRequesters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;
- (void)unregisterRequester:(id)arg1 forIsolationIdentifier:(id)arg2;
- (id)registerRequester:(id)arg1 forIsolationIdentifier:(id)arg2;
- (void)unregisterViewControllerForIsolationIdentifier:(id)arg1;
- (void)registerViewController:(id)arg1 forIsolationIdentifier:(id)arg2;
- (_Bool)hasRegisteredViewControllerForIdentifier:(id)arg1;
- (id)init;

@end

