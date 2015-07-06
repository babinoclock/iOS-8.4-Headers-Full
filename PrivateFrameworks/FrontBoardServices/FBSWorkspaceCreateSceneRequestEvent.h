/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSSceneClientSettingsDiff;

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent {

	FBSSceneClientSettingsDiff* _clientSettings;

}

@property (nonatomic,retain) FBSSceneClientSettingsDiff * clientSettingsDiff;              //@synthesize clientSettings=_clientSettings - In the implementation block
-(void)dealloc;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSSceneClientSettingsDiff *)clientSettingsDiff;
-(void)setClientSettingsDiff:(FBSSceneClientSettingsDiff *)arg1 ;
@end

