//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SBGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
- (id)color;

@end

