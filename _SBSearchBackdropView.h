//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBackdropView.h>

@interface _SBSearchBackdropView : _UIBackdropView
{
    double _transitionProgress;
    double _finalScale;
    double _scale;
}

@property double scale; // @synthesize scale=_scale;
- (void)transitionComplete;
- (void)applySettings:(id)arg1;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;

@end

