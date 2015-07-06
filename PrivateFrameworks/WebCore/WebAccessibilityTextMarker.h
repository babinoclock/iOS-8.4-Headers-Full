/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	AXObjectCache* _cache;
	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)description;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(WebAccessibilityObjectWrapper*)arg2 ;
-(id)dataRepresentation;
-(VisiblePosition*)visiblePosition;
@end
