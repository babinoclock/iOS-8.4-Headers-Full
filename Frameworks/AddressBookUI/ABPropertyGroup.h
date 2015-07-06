/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:23 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABAbstractPropertyGroup.h>

@class NSMutableDictionary, NSMutableArray, ABActionsController, NSString, ABCapabilitiesManager;

@interface ABPropertyGroup : ABAbstractPropertyGroup {

	int _property;
	void* _context;
	NSMutableDictionary* _valuesByPerson;
	NSMutableArray* _recordInfoDictionaries;
	NSMutableArray* _propertyLabels;
	NSMutableDictionary* _lineInfosByIndex;
	ABActionsController* _actionsController;
	void* _defaultPolicy;
	NSMutableDictionary* _preinsertedRecordInfoDictionary;
	id _preinsertedValue;
	NSString* _preinsertedLabel;
	NSMutableDictionary* _insertionRecordInfoDictionary;
	id _insertionValue;
	NSString* _insertionLabel;
	NSMutableDictionary* _recordInfoDictionaryForItemBeingDeleted;
	NSMutableDictionary* _valueForItemBeingDeleted;
	NSString* _labelForItemBeingDeleted;
	int _lastIndexWithAddedItem;
	ABCapabilitiesManager* _capabilitiesManager;
	char _allowsVibrations;
	id _vibrationManager;

}
-(void)reloadFromModel;
-(void)updateRecord;
-(char)allowsAdding;
-(id)writablePeopleAtIndex:(int)arg1 ;
-(id)actualPropertyLabelAtIndex:(int)arg1 forPerson:(id)arg2 ;
-(id)propertyLabelAtIndex:(int)arg1 ;
-(void*)defaultPolicy;
-(id)countryCodeAtIndex:(int)arg1 ;
-(char)editableFlagFromInfo:(id)arg1 ;
-(id)accountBadgeFromInfo:(id)arg1 whenEditing:(char)arg2 ;
-(id)labelTextForInfo:(id)arg1 ;
-(id)propertyValueForInfo:(id)arg1 ;
-(id)lineInfosForInfo:(id)arg1 ;
-(id)placeholderTextForKey:(id)arg1 info:(id)arg2 ;
-(id)valueForKey:(id)arg1 info:(id)arg2 ;
-(id)displayTextForInfo:(id)arg1 ;
-(char)instantMessageServiceIsSupported;
-(char)shouldDisambiguateNotes;
-(id)keyboardSettingsForKey:(id)arg1 info:(id)arg2 ;
-(void)_clearAllCachedInfo;
-(void)setAllowsVibrations:(char)arg1 ;
-(void)setPropertyLabel:(id)arg1 atIndex:(int)arg2 ;
-(int)insertionIndex;
-(void)setPropertyValue:(id)arg1 atIndex:(int)arg2 ;
-(int)alertIdentifierAtIndex:(int)arg1 ;
-(void)setCountryCode:(id)arg1 atIndex:(int)arg2 ;
-(id)propertyValueAtIndex:(int)arg1 ;
-(void)setService:(id)arg1 atIndex:(int)arg2 ;
-(void)getAnyIdentifier:(int*)arg1 andPerson:(id*)arg2 atIndex:(int)arg3 ;
-(id)stringValueAtIndex:(int)arg1 ;
-(id)localizedPropertyLabelAtIndex:(int)arg1 ;
-(id)allRecordInfosAtIndex:(int)arg1 ;
-(int)indexOfIdentifier:(int)arg1 person:(id)arg2 ;
-(int)rowCountWhenEditing:(char)arg1 ;
-(int)rowForIndex:(int)arg1 editableFlag:(char)arg2 whenEditing:(char)arg3 ;
-(void)getIndex:(int*)arg1 andEditableFlag:(char*)arg2 forRow:(int)arg3 whenEditing:(char)arg4 ;
-(id)initWithProperty:(int)arg1 context:(void*)arg2 ;
-(id)rowsToInsertInTransition:(char)arg1 ;
-(id)rowsToDeleteInTransition:(char)arg1 ;
-(void)setDefaultPolicy:(void*)arg1 ;
-(char)shouldShowAlertsWhenEditing:(char)arg1 ;
-(char)areLabelsEditable;
-(void)refreshVibrations;
-(char)setEmptyValueAtIndex:(int)arg1 editableFlag:(char)arg2 whenEditing:(char)arg3 ;
-(char)removeItemAtRow:(int)arg1 whenEditing:(char)arg2 ;
-(char)canDeleteAtIndex:(int)arg1 editableFlag:(char)arg2 ;
-(void)prepareActionsController:(id)arg1 withValueAtIndex:(int)arg2 ;
-(char)allowsVibrations;
-(void)setValue:(id)arg1 forKey:(id)arg2 forIndex:(int)arg3 ;
-(void)addPreinsertedItem;
-(void)trimValueForCountryCodeAtIndex:(int)arg1 ;
-(char)canSaveAtIndex:(int)arg1 editableFlag:(char)arg2 ;
-(void)_reloadPreinsertedStuff:(char)arg1 insertionStuff:(char)arg2 ;
-(id)serviceAtIndex:(int)arg1 ;
-(int)indexOfRingtoneInAlertEquivalentMultiValue;
-(int)indexOfCallVibrationInAlertEquivalentMultiValue;
-(int)indexOfTextVibrationInAlertEquivalentMultiValue;
-(char)hasMultipleAlertsAtIndex:(int)arg1 ;
-(void*)_copyCachedValueForPerson:(id)arg1 ;
-(void*)_policyForPerson:(id)arg1 ;
-(char)_setValueInCache:(void*)arg1 forPerson:(id)arg2 ;
-(id)_peopleInCache;
-(id)_toneManager;
-(id)_vibrationManager;
-(char)_removeValueInCacheForPerson:(id)arg1 ;
-(id)_allRecordInfosInRecordInfoDictionary:(id)arg1 ;
-(void)_getFromCachePropertyValue:(id*)arg1 andLabel:(id*)arg2 forPerson:(id)arg3 identifier:(int)arg4 ;
-(id)_bestValueBetween:(id)arg1 and:(id)arg2 ;
-(void)_getAnyIdentifier:(int*)arg1 person:(id*)arg2 propertyValue:(id*)arg3 propertyLabel:(id*)arg4 fromRecordInfoDictionary:(id)arg5 ;
-(id)shortServiceForService:(id)arg1 ;
-(id)_stringRepresentationOfPropertyValue:(id)arg1 ;
-(char)_isEmptyValue:(id)arg1 isPreinserted:(char)arg2 ;
-(char)_setValueInCache:(void*)arg1 forPerson:(id)arg2 preventLabelChange:(char)arg3 ;
-(id)_recordInfoDictionaryAtIndex:(int)arg1 ;
-(char)_updateCacheForPerson:(id)arg1 identifier:(int*)arg2 value:(id)arg3 label:(CFStringRef)arg4 shouldSetValue:(char)arg5 shouldSetLabel:(char)arg6 ;
-(char)_updateCacheWithPropertyValue:(id)arg1 propertyLabel:(id)arg2 recordInfoDictionaryAtIndex:(unsigned)arg3 shouldSetValue:(char)arg4 shouldSetLabel:(char)arg5 ;
-(char)_isSocialProfile:(id)arg1 equivalentTo:(id)arg2 ;
-(char)_isBirthdayDate:(id)arg1 equivalentTo:(id)arg2 ;
-(char)_isPropertyValue:(id)arg1 equivalentTo:(id)arg2 ;
-(id)_valueForCheckingExistenceOfPropertyValue:(id)arg1 ;
-(id)_findFuzzyMatchingValue:(id)arg1 inDictionary:(id)arg2 ;
-(char)_recordInfoDictionary:(id)arg1 containsPerson:(id)arg2 ;
-(id)_recordInfoDictionaryForPerson:(id)arg1 identifier:(int)arg2 ;
-(id)_recordInfoForPerson:(id)arg1 identifier:(int)arg2 ;
-(id)_recordInfoForPerson:(id)arg1 ;
-(char)allowsAddingForPerson:(id)arg1 ;
-(void)_setRecordInfoDictionary:(id)arg1 atIndex:(int)arg2 ;
-(void)_setCountryCode:(id)arg1 atIndex:(int)arg2 withCountryName:(char)arg3 ;
-(char)_instantMessageServiceIsSupportedForPerson:(id)arg1 ;
-(void)_addValuesToCache;
-(int)indexOfTextToneInAlertEquivalentMultiValue;
-(id)_sortedPeople:(id)arg1 ;
-(void)_insertSingleValue:(id)arg1 label:(id)arg2 identifier:(int)arg3 forPerson:(id)arg4 indicesAndLabelsForValuesSeenAlready:(id)arg5 ;
-(id)_recordInfoDictionaryWithAllPeople;
-(char)shouldShowRingtoneWhenEditing:(char)arg1 ;
-(char)shouldShowCallVibrationWhenEditing:(char)arg1 ;
-(char)shouldShowTextToneWhenEditing:(char)arg1 ;
-(char)shouldShowTextVibrationWhenEditing:(char)arg1 ;
-(id)propertyValueAtIndex:(int)arg1 forceUseReadonly:(char)arg2 ;
-(void)_getFromCacheAnyPropertyValue:(id*)arg1 andLabel:(id*)arg2 forRecordInfoDictionary:(id)arg3 ;
-(char)_canSaveAtIndex:(int)arg1 ;
-(char)_updateCacheWithPropertyLabel:(id)arg1 atIndex:(int)arg2 ;
-(void)_setPropertyLabel:(id)arg1 atIndex:(int)arg2 markChanged:(char)arg3 ;
-(id)propertyLabelAtIndex:(int)arg1 forceUseReadonly:(char)arg2 ;
-(char)_updateCacheWithPropertyValue:(id)arg1 atIndex:(int)arg2 ;
-(id)_newLocalizedCountryNameForCountryCode:(id)arg1 ;
-(id)lineInfosAtIndex:(int)arg1 ;
-(id)_valueFromCacheForPerson:(id)arg1 ;
-(char)_hasNonNullSoundForIdentifier:(int)arg1 ;
-(char)hasRingtone;
-(char)hasTextTone;
-(char)hasCallVibration;
-(char)hasTextVibration;
-(void)_getIndex:(int*)arg1 andEditableFlag:(char*)arg2 fromInfo:(id)arg3 ;
-(int)_indexFromInfo:(id)arg1 ;
-(id)_getFromLineInfos:(id)arg1 key:(id)arg2 valueForKey:(id)arg3 ;
-(id)_newLocalizedPlaceholderForKey:(id)arg1 ;
-(char)_propertyIsDate;
-(id)_recordInfoDictionaryForPerson:(id)arg1 ;
-(char)setEmptyValueAtRow:(int)arg1 whenEditing:(char)arg2 ;
-(char)removeItemAtRow:(int)arg1 ;
-(void)setCapabilitiesManager:(id)arg1 ;
-(id)actionsControllerPreparedWithValueAtIndex:(int)arg1 ;
-(id)peopleFromInfo:(id)arg1 whenEditing:(char)arg2 ;
-(char)multiCellContentView:(id)arg1 alwaysShowsClearButtonAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void*)context;
-(char)canSave;
-(int)itemCount;
-(int)property;
@end

