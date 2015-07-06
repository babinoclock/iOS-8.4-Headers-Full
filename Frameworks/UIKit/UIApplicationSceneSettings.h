/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>
#import <UIKit/UIApplicationSceneSettings.h>

@protocol UIApplicationSceneSettings <NSObject>
@property (nonatomic,readonly) char underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
@required
-(char)underLock;
-(int)statusBarStyleOverridesToSuppress;

@end


@class NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char underLock; 
@property (nonatomic,readonly) int statusBarStyleOverridesToSuppress; 
-(char)isUISubclass;
-(char)underLock;
-(int)statusBarStyleOverridesToSuppress;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
@end
