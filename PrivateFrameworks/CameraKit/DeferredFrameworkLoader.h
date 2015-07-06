/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:41 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DeferredFrameworkLoader : NSObject {

	NSString* _path;
	void* _frameworkHandle;
	long _frameworkLoadedToken;

}

@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) void* frameworkHandle;                  //@synthesize frameworkHandle=_frameworkHandle - In the implementation block
@property (assign,nonatomic) long frameworkLoadedToken;              //@synthesize frameworkLoadedToken=_frameworkLoadedToken - In the implementation block
+(id)PhotosUIFrameworkPath;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(Class)classFromString:(id)arg1 ;
-(void*)frameworkHandle;
-(void)setFrameworkHandle:(void*)arg1 ;
-(long)frameworkLoadedToken;
-(void)setFrameworkLoadedToken:(long)arg1 ;
@end
