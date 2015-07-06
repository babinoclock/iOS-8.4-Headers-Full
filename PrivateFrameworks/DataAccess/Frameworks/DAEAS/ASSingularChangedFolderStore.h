/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASChangedFolderStore.h>

@class NSString;

@interface ASSingularChangedFolderStore : ASChangedFolderStore {

	NSString* _serverId;

}

@property (nonatomic,retain) NSString * serverId;              //@synthesize serverId=_serverId - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)setServerId:(NSString *)arg1 ;
-(NSString *)serverId;
@end
