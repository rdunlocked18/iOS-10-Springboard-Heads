//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSTransaction.h>

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : BSTransaction
{
    SBStarkScreenController *_screenController;
    double _timeout;
}

- (void).cxx_destruct;
- (void)_begin;
- (id)initWithScreenController:(id)arg1 timeout:(double)arg2;

@end

