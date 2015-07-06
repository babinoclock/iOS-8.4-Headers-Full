/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <BulletinBoard/BulletinBoard-Structs.h>
@class NSMutableDictionary, NSString;

@interface BBObserverBulletinAttachmentInfo : NSObject {

	NSMutableDictionary* _imageSizePairs;
	char _imagesFetched;
	char _sizesFetched;
	NSString* _imagesRecordID;
	NSString* _sizesRecordID;

}

@property (assign,nonatomic) char imagesFetched;                   //@synthesize imagesFetched=_imagesFetched - In the implementation block
@property (nonatomic,copy) NSString * imagesRecordID;              //@synthesize imagesRecordID=_imagesRecordID - In the implementation block
@property (assign,nonatomic) char sizesFetched;                    //@synthesize sizesFetched=_sizesFetched - In the implementation block
@property (nonatomic,copy) NSString * sizesRecordID;               //@synthesize sizesRecordID=_sizesRecordID - In the implementation block
-(void)dealloc;
-(id)init;
-(CGSize)sizeForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)noteImagesFetchedForRecordID:(id)arg1 ;
-(void)noteSizesFetchedForRecordID:(id)arg1 ;
-(char)isImagesFetchedForRecordID:(id)arg1 ;
-(char)isSizesFetchedForRecordID:(id)arg1 ;
-(id)_pairForKey:(id)arg1 create:(char)arg2 ;
-(void)setImagesFetched:(char)arg1 ;
-(void)setImagesRecordID:(NSString *)arg1 ;
-(char)imagesFetched;
-(NSString *)imagesRecordID;
-(void)setSizesFetched:(char)arg1 ;
-(void)setSizesRecordID:(NSString *)arg1 ;
-(char)sizesFetched;
-(NSString *)sizesRecordID;
-(id)imageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

