/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface ICCameraItem : NSObject {

	void* _itemProperties;

}

@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (getter=isLocked) char locked; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnail; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSMutableDictionary * userData; 
@property (readonly) char hasThumbnail; 
@property (readonly) char hasMetadata; 
@property (readonly) NSString * fileSystemPath; 
-(char)isCameraFile;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(NSDate *)modificationDate;
-(char)hasMetadata;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSMutableDictionary *)userData;
-(CGImageRef)thumbnail;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(char)hasThumbnail;
-(NSDate *)creationDate;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)appendToPath:(id)arg1 ;
-(NSString *)fileSystemPath;
-(void)requestMetadata;
-(void)requestThumbnail;
-(void)flushMetadataCache;
-(void)flushThumbnailCache;
-(void)setModificationDate:(NSDate *)arg1 ;
-(NSDictionary *)metadata;
-(ICCameraFolder *)parentFolder;
-(void)setCreationDate:(NSDate *)arg1 ;
-(ICCameraDevice *)device;
-(void)finalize;
@end

