/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADAdSheetConnectionDelegate <NSObject>
@optional
-(char)shouldConnectToAdSheet;
-(void)adSheetConnectionEstablished;
-(void)adSheetConnectionLost;

@required
-(id)adSheetMachServiceName;
-(void)configureConnection:(id)arg1;

@end

