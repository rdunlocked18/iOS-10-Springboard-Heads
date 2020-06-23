//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import "SBSUIRemoteAlertItemContentHostInterface-Protocol.h"

@class NSString;

@interface _SBRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>
{
    id _delegate;
    NSString *_serviceClassName;
    _Bool _serviceHasSetPreferredContentSize;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
@property(copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;
- (id)description;

@end

