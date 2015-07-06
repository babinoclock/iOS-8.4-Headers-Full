/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:39 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/NSCoding.h>

@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding> {

	id _topLevelObject;
	NSArray* _traitStorages;
	NSSet* _descendants;

}

@property (nonatomic,__weak,readonly) id topLevelObject;              //@synthesize topLevelObject=_topLevelObject - In the implementation block
@property (nonatomic,readonly) NSArray * traitStorages;               //@synthesize traitStorages=_traitStorages - In the implementation block
@property (nonatomic,readonly) NSSet * descendants;                   //@synthesize descendants=_descendants - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)traitStorages;
-(id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3 ;
-(id)topLevelObject;
-(NSSet *)descendants;
@end
