//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SBDashBoardBackgroundStyleTransitioning <NSObject>
@property(readonly, nonatomic, getter=isTransitioningBackgroundStyle) _Bool transitioningBackgroundStyle;
@property(nonatomic) long long backgroundStyle;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
@end

