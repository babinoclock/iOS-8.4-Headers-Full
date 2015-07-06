/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSData, NSString, UIImage;

@interface CKImageData : NSObject {

	CGImageSourceRef _imageSource;
	unsigned _count;
	int _orientation;
	CGSize _pxSize;
	char _initializedProperties;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CGSize ptSize; 
@property (nonatomic,readonly) CGSize pxSize; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) int orientation; 
@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,readonly) unsigned count; 
+(id)UTITypeForData:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(int)orientation;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(UIImage *)image;
-(NSString *)MIMEType;
-(void)_initializeProperties;
-(NSString *)UTIType;
-(CGSize)ptSize;
-(id)thumbnailFillToSize:(CGSize)arg1 ;
-(CGSize)pxSize;
-(id)durationsWithMaxCount:(unsigned)arg1 ;
-(id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(unsigned)arg2 ;
-(id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(unsigned)arg2 ;
-(id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(unsigned)arg2 ;
-(id)thumbnailFitToSize:(CGSize)arg1 ;
-(id)thumbnailFillToSizeCropping:(CGSize)arg1 ;
-(id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(unsigned)arg2 ;
@end

