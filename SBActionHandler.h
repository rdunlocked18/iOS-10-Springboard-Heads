//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBActionHandler : NSObject
{
}

+ (id)sharedInstance;
- (void)_reportAndKillInsecureProcesses:(id)arg1;
- (void)_executeRestartAction:(id)arg1 fromProcess:(id)arg2;
- (void)handleActions:(id)arg1 origin:(id)arg2 withResult:(CDUnknownBlockType)arg3;

@end

