//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDosidoAnimator.h"

@class UIView;

@interface SBSlideOverDosidoAnimator : SBDosidoAnimator
{
    unsigned long long _slideOverDirection;
    UIView *_fromContainerView;
    UIView *_toContainerView;
    UIView *_fromDimmingView;
    UIView *_toDimmingView;
}

+ (double)defaultDuration;
@property(readonly, nonatomic) UIView *toDimmingView; // @synthesize toDimmingView=_toDimmingView;
@property(readonly, nonatomic) UIView *fromDimmingView; // @synthesize fromDimmingView=_fromDimmingView;
@property(readonly, nonatomic) UIView *toContainerView; // @synthesize toContainerView=_toContainerView;
@property(readonly, nonatomic) UIView *fromContainerView; // @synthesize fromContainerView=_fromContainerView;
@property(nonatomic) unsigned long long slideOverDirection; // @synthesize slideOverDirection=_slideOverDirection;
- (void).cxx_destruct;
- (void)_rotateViewIfNecessary:(id)arg1 inverted:(_Bool)arg2;
- (void)_cleanupDosido;
- (void)_animateDosidoWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareDosido;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;
- (id)initWithParentView:(id)arg1 fromOrientation:(long long)arg2;

@end

