/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUILoaderDelegate <NSObject>
@optional
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(id)loader:(id)arg1 connection:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4;

@required
-(void)loader:(id)arg1 didFailWithError:(id)arg2;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

@end

