/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceResponse.h>

@class BSMachSendRight;

@interface FBSUIApplicationLaunchResponse : FBSWorkspaceResponse {

	char _supportsTaskSuspension;
	char _supportsTaskSuspensionOnLock;
	BSMachSendRight* _taskPort;

}

@property (assign,nonatomic) char supportsTaskSuspension;                    //@synthesize supportsTaskSuspension=_supportsTaskSuspension - In the implementation block
@property (assign,nonatomic) char supportsTaskSuspensionOnLock;              //@synthesize supportsTaskSuspensionOnLock=_supportsTaskSuspensionOnLock - In the implementation block
@property (nonatomic,retain) BSMachSendRight * taskPort;                     //@synthesize taskPort=_taskPort - In the implementation block
-(void)dealloc;
-(void)setSupportsTaskSuspension:(char)arg1 ;
-(void)setSupportsTaskSuspensionOnLock:(char)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BSMachSendRight *)taskPort;
-(void)setTaskPort:(BSMachSendRight *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)supportsTaskSuspension;
-(char)supportsTaskSuspensionOnLock;
@end

