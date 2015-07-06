/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImageBuffer.h>

@interface BLPixelImageBuffer : BLImageBuffer
+(id)bufferWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
+(id)bufferWithImage:(id)arg1 colorManagement:(int)arg2 ;
-(id)image;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
@end

