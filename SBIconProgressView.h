//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, UIImage, _SBIconProgressFractionTransition, _SBIconProgressPausedTransition, _SBIconProgressStateTransition;
@protocol SBIconProgressViewDelegate;

@interface SBIconProgressView : UIView
{
    _SBIconProgressStateTransition *_activeStateTransition;
    _SBIconProgressPausedTransition *_activePausedTransition;
    _SBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    _Bool _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
    _Bool _canAnimate;
    _Bool _displayingPaused;
    id <SBIconProgressViewDelegate> _delegate;
    UIImage *_overlayImage;
    double _backgroundAlpha;
    double _foregroundAlpha;
    double _circleRadiusFraction;
    double _pauseRadiusFraction;
    long long _displayedState;
    double _displayedFraction;
}

+ (id)_pieImageAtFraction:(double)arg1;
+ (id)_pieImagesMemoryPool;
@property(retain, nonatomic) _SBIconProgressFractionTransition *activeFractionTransition; // @synthesize activeFractionTransition=_activeFractionTransition;
@property(retain, nonatomic) _SBIconProgressPausedTransition *activePausedTransition; // @synthesize activePausedTransition=_activePausedTransition;
@property(retain, nonatomic) _SBIconProgressStateTransition *activeStateTransition; // @synthesize activeStateTransition=_activeStateTransition;
@property(nonatomic) double displayedFraction; // @synthesize displayedFraction=_displayedFraction;
@property(nonatomic) _Bool displayingPaused; // @synthesize displayingPaused=_displayingPaused;
@property(nonatomic) long long displayedState; // @synthesize displayedState=_displayedState;
@property(nonatomic) double pauseRadiusFraction; // @synthesize pauseRadiusFraction=_pauseRadiusFraction;
@property(nonatomic) double circleRadiusFraction; // @synthesize circleRadiusFraction=_circleRadiusFraction;
@property(nonatomic) double foregroundAlpha; // @synthesize foregroundAlpha=_foregroundAlpha;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) _Bool canAnimate; // @synthesize canAnimate=_canAnimate;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) __weak id <SBIconProgressViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect circleBoundingRect;
- (id)_maskImage;
- (void)_drawPauseUIWithCenter:(struct CGPoint)arg1;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint)arg1;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint)arg1;
- (void)_drawPieWithCenter:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_clearDisplayLink;
- (void)_ensureDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateFractionTransitionAnimated:(_Bool)arg1;
- (void)_updateStateTransitionAnimated:(_Bool)arg1;
- (void)_updatePausedTransitionAnimated:(_Bool)arg1;
- (void)_updateTransitionsAnimated:(_Bool)arg1;
- (_Bool)_hasActiveTransitions;
- (void)setState:(long long)arg1 paused:(_Bool)arg2 fractionLoaded:(double)arg3 animated:(_Bool)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

