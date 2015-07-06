/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSArray;

@interface CoreDAVACLTask : CoreDAVTask {

	NSArray* _accessControlEntities;

}

@property (assign,nonatomic) id<CoreDAVACLTaskDelegate> delegate; 
@property (nonatomic,retain) NSArray * accessControlEntities;                  //@synthesize accessControlEntities=_accessControlEntities - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSArray *)accessControlEntities;
-(void)setAccessControlEntities:(NSArray *)arg1 ;
-(id)initWithAccessControlEntities:(id)arg1 atURL:(id)arg2 ;
-(id)requestBody;
@end

