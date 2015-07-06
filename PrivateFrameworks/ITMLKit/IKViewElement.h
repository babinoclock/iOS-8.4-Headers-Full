/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKAppDocument, NSString, NSArray, NSDictionary, IKViewElementStyleComposer, NSMutableDictionary, NSMutableSet, SKUIEntityProviderListViewElement, IKViewElementStyle;

@interface IKViewElement : NSObject {

	char _disabled;
	char _impressionable;
	IKAppDocument* _appDocument;
	NSString* _elementID;
	unsigned _elementType;
	NSString* _elementName;
	IKViewElement* _parent;
	NSArray* _children;
	NSDictionary* _attributes;
	NSString* _accessibilityText;
	NSString* _autoHighlightIdentifier;
	unsigned _updateType;
	NSArray* _features;
	NSString* _itmlID;
	IKViewElementStyleComposer* _styleComposer;
	NSMutableDictionary* _metadataDict;
	NSMutableSet* _activeSingularEvents;

}

@property (nonatomic,readonly) SKUIEntityProviderListViewElement * entityProviderList; 
@property (nonatomic,copy,readonly) NSString * elementID;                                           //@synthesize elementID=_elementID - In the implementation block
@property (nonatomic,readonly) unsigned elementType;                                                //@synthesize elementType=_elementType - In the implementation block
@property (nonatomic,copy,readonly) NSString * elementName;                                         //@synthesize elementName=_elementName - In the implementation block
@property (assign,nonatomic,__weak) IKViewElement * parent;                                         //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * children;                                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * attributes;                                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyle * style; 
@property (nonatomic,copy,readonly) NSString * accessibilityText;                                   //@synthesize accessibilityText=_accessibilityText - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoHighlightIdentifier;                             //@synthesize autoHighlightIdentifier=_autoHighlightIdentifier - In the implementation block
@property (assign,getter=isDisabled,nonatomic) char disabled;                                       //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isImpressionable,nonatomic) char impressionable;                           //@synthesize impressionable=_impressionable - In the implementation block
@property (assign,nonatomic) unsigned updateType;                                                   //@synthesize updateType=_updateType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * features;                                             //@synthesize features=_features - In the implementation block
@property (assign,nonatomic,__weak) IKAppDocument * appDocument;                                    //@synthesize appDocument=_appDocument - In the implementation block
@property (nonatomic,retain,readonly) NSString * itmlID;                                            //@synthesize itmlID=_itmlID - In the implementation block
@property (nonatomic,retain,readonly) IKViewElementStyleComposer * styleComposer;                   //@synthesize styleComposer=_styleComposer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * metadataDict;                                    //@synthesize metadataDict=_metadataDict - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeSingularEvents;                                   //@synthesize activeSingularEvents=_activeSingularEvents - In the implementation block
+(unsigned)evaluateElementUpdateTypeAndReset:(id)arg1 ;
+(char)shouldParseChildDOMElement:(id)arg1 ;
+(id)supportedFeatures;
+(char)shouldParseChildDOMElements;
-(SKUIEntityProviderListViewElement *)entityProviderList;
-(NSString *)elementID;
-(void)dealloc;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(IKViewElementStyle *)style;
-(void)setDisabled:(char)arg1 ;
-(NSDictionary *)attributes;
-(void)setUpdateType:(unsigned)arg1 ;
-(id)childElementsWithType:(unsigned)arg1 ;
-(id)childElementWithType:(unsigned)arg1 ;
-(id)childTextElementWithStyle:(unsigned)arg1 ;
-(void)setAppDocument:(IKAppDocument *)arg1 ;
-(id)childImageElementWithType:(unsigned)arg1 ;
-(IKViewElementStyleComposer *)styleComposer;
-(void)_reorderAndUpdateChildrenWithElements:(id)arg1 ;
-(void)_applyUpdatesToChildrenWithElements:(id)arg1 ;
-(void)_setAppDocument:(id)arg1 ;
-(void)setMetadataDict:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)activeSingularEvents;
-(void)setActiveSingularEvents:(NSMutableSet *)arg1 ;
-(void)_appDocumentDidMarkStylesDirty:(id)arg1 ;
-(void)setImpressionable:(char)arg1 ;
-(NSMutableDictionary *)metadataDict;
-(NSString *)autoHighlightIdentifier;
-(void)setChildren:(NSArray *)arg1 ;
-(IKViewElement *)parent;
-(void)setParent:(IKViewElement *)arg1 ;
-(unsigned)elementType;
-(void)dispatchEventOfType:(unsigned)arg1 canBubble:(char)arg2 isCancelable:(char)arg3 extraInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(unsigned)updateType;
-(NSString *)itmlID;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)accessibilityText;
-(NSArray *)features;
-(IKAppDocument *)appDocument;
-(NSString *)elementName;
-(char)isDisabled;
-(char)isImpressionable;
-(NSArray *)children;
@end
