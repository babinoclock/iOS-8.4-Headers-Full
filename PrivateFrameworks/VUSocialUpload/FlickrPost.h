/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VUSocialUpload/FlickrRequest.h>
#import <VUSocialUpload/NSURLConnectionDelegate.h>

@class NSURL, NSData, NSString, NSArray;

@interface FlickrPost : FlickrRequest <NSURLConnectionDelegate> {

	char _hidden;
	NSURL* _assetURL;
	NSData* _photoData;
	NSString* _title;
	NSString* _postDescription;
	NSArray* _tags;
	unsigned _visibility;
	int _safetyLevel;
	int _contentType;
	long long _photoSetID;

}

@property (nonatomic,retain) NSURL * assetURL;                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,retain) NSData * photoData;                      //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (nonatomic,retain) NSArray * tags;                          //@synthesize tags=_tags - In the implementation block
@property (assign,nonatomic) long long photoSetID;                    //@synthesize photoSetID=_photoSetID - In the implementation block
@property (assign,nonatomic) unsigned visibility;                     //@synthesize visibility=_visibility - In the implementation block
@property (assign,nonatomic) int safetyLevel;                         //@synthesize safetyLevel=_safetyLevel - In the implementation block
@property (assign,nonatomic) int contentType;                         //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) char hidden;                             //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setHidden:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)tags;
-(void)setTags:(NSArray *)arg1 ;
-(void)setPhotoData:(NSData *)arg1 ;
-(NSData *)photoData;
-(NSURL *)assetURL;
-(id)serializedDictionary;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSString *)postDescription;
-(long long)photoSetID;
-(void)setPhotoSetID:(long long)arg1 ;
-(void)setPostDescription:(NSString *)arg1 ;
-(void)_uploadData:(id)arg1 toAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)uploadToAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(int)safetyLevel;
-(void)setSafetyLevel:(int)arg1 ;
-(char)hidden;
-(unsigned)visibility;
-(void)setVisibility:(unsigned)arg1 ;
-(void)setContentType:(int)arg1 ;
-(int)contentType;
@end

