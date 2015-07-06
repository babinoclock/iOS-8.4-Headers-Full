/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSSet;

@interface EKRelation : NSObject {

	NSString* _entityName;
	char _toMany;
	char _ownsRelated;
	NSSet* _inversePropertyNames;
	/*^block*/id _inversePropertyIsApplicable;

}

@property (nonatomic,readonly) char toMany; 
@property (nonatomic,readonly) NSSet * inversePropertyNames; 
@property (nonatomic,readonly) char ownsRelatedObject; 
@property (nonatomic,copy) id inversePropertyIsApplicable;                //@synthesize inversePropertyIsApplicable=_inversePropertyIsApplicable - In the implementation block
+(id)relationWithEntityName:(id)arg1 toMany:(char)arg2 inversePropertyNames:(id)arg3 ownsRelated:(char)arg4 ;
+(id)relationWithEntityName:(id)arg1 toMany:(char)arg2 inversePropertyNames:(id)arg3 ;
-(char)toMany;
-(char)ownsRelatedObject;
-(NSSet *)inversePropertyNames;
-(char)shouldSetInverseProperty:(id)arg1 onObject:(id)arg2 forObject:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 toMany:(char)arg2 inversePropertyNames:(id)arg3 ownsRelated:(char)arg4 ;
-(id)inversePropertyIsApplicable;
-(void)setInversePropertyIsApplicable:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

