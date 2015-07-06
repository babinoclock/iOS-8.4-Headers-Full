/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,retain,readonly) NSString * assetUUID; 
+(id)notification;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)name;
-(id)_init;
-(UIImage *)image;
-(id)userInfo;
-(id)object;
-(NSString *)assetUUID;
@end

