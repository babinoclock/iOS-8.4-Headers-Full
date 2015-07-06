/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, UIImage, NSValue;

@interface AAUIUpdateMyPhotoRequest : AARequest {

	ACAccount* _account;
	UIImage* _photo;
	NSValue* _cropRect;

}
+(id)_downsampleImage:(id)arg1 fromStartingQuality:(float)arg2 toEndingQuality:(float)arg3 increment:(float)arg4 maxLength:(unsigned)arg5 ;
+(id)_fullScreen2ImageFromImage:(id)arg1 cropRect:(id)arg2 fullScreenCropRect:(id*)arg3 ;
-(id)urlString;
-(id)initWithAccount:(id)arg1 photo:(id)arg2 cropRect:(id)arg3 ;
-(id)urlRequest;
@end

