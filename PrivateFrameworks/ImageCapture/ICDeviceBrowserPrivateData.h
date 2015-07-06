/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDeviceBrowserPrivateData : NSObject {

	id _delegate;
	char _browsing;
	NSMutableArray* _internalDevices;

}

@property (assign) id delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBrowsing) char browsing;                      //@synthesize browsing=_browsing - In the implementation block
@property (retain) NSMutableArray * internalDevices;              //@synthesize internalDevices=_internalDevices - In the implementation block
-(char)isBrowsing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setInternalDevices:(NSMutableArray *)arg1 ;
-(void)setBrowsing:(char)arg1 ;
-(NSMutableArray *)internalDevices;
-(void)finalize;
@end

