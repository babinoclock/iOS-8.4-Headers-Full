/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSError, UIAlertView, NSString;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	NSError* _error;
	UIAlertView* _alert;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_presentAlertWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id)initWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_forceFinishNow;
@end

