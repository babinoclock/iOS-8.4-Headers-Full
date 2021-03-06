/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
@class NSMutableArray;

@interface BLImagePatchList : NSObject {

	CGImageRef _baseImage;
	CGSize _size;
	NSMutableArray* _patchArray;

}
+(id)imagePatchListWithSingleImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGSize)size;
-(int)count;
-(id)description;
-(id)initWithImage:(CGImageRef)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)addPatch:(id)arg1 ;
-(void)removeAllPatches;
@end

