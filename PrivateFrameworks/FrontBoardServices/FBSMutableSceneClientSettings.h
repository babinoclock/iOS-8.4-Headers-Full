/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>

@class NSSet;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (assign,nonatomic) float preferredLevel; 
@property (assign,nonatomic) int preferredInterfaceOrientation; 
@property (nonatomic,copy) NSSet * occlusions; 
+(char)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(void)setOcclusions:(NSSet *)arg1 ;
-(void)setPreferredLevel:(float)arg1 ;
-(void)setPreferredInterfaceOrientation:(int)arg1 ;
@end

