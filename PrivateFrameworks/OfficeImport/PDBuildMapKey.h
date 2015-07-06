/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {

	NSValue* mDrawableValue;
	NSString* mGroupId;

}
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)drawable;
-(void)setDrawable:(id)arg1 ;
-(id)initWithDrawable:(id)arg1 groupId:(id)arg2 ;
-(id)groupId;
-(void)setGroupId:(id)arg1 ;
@end

