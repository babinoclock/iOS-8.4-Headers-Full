/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:47 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>

@class _NCWidgetViewController;

@interface _NCWidgetExtensionContext : NSExtensionContext {

	_NCWidgetViewController* _hostViewController;

}

@property (assign,nonatomic) _NCWidgetViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(_NCWidgetViewController *)hostViewController;
-(void)setHostViewController:(_NCWidgetViewController *)arg1 ;
@end
