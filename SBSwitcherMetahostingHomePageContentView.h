//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBSwitcherWallpaperPageContentView.h"

@class SBAppSwitcherSettings, SBOrientationTransformWrapperView, SBWindowSelfHostWrapper, UIView;

@interface SBSwitcherMetahostingHomePageContentView : SBSwitcherWallpaperPageContentView
{
    SBOrientationTransformWrapperView *_portraitContentWrapper;
    SBOrientationTransformWrapperView *_rotatingContentWrapper;
    UIView *_darkeningView;
    SBWindowSelfHostWrapper *_iconsWindowHostWrapper;
    UIView *_snapshotView;
    UIView *_externalHomeScreenSnapshotView;
    SBWindowSelfHostWrapper *_statusBarWindowHostWrapper;
    UIView *_fakeStatusBar;
    SBAppSwitcherSettings *_settings;
    _Bool _presenting;
    _Bool _interactive;
}

+ (_Bool)_usesSnapshots;
- (void).cxx_destruct;
- (double)_darkeningFactor;
- (long long)_targetWallpaperStyle;
- (void)_handleDidDismissSpotlight:(id)arg1;
- (void)_handleWillDismissSpotlight:(id)arg1;
- (void)_transitionWallpaperWithProgress:(double)arg1 presenting:(_Bool)arg2;
- (void)_createFakeStatusBar;
- (void)_removeSnapshotIfNecessary;
- (void)_substituteSnapshotIfNecessary;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)interactionDidEnd:(_Bool)arg1;
- (void)updateTransitionProgress:(double)arg1;
- (void)transitionDidEnd:(_Bool)arg1 forPresentation:(_Bool)arg2;
- (void)viewDismissing:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (void)viewPresenting:(id)arg1 withInteraction:(_Bool)arg2 andInitialProgress:(double)arg3 forTransitionRequest:(id)arg4;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

