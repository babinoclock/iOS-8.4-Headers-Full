/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIModalViewDelegate.h>

@class UIAlertView, BTSDevice, NSString;

@interface BTAlert : NSObject <UIModalViewDelegate> {

	id _delegate;
	UIAlertView* _alert;
	BTSDevice* _device;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertWithResult:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)dismiss;
@end

