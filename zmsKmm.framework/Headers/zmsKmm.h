#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ZmsKmmKodein_diDITrigger, ZmsKmmTrip_point, ZmsKmmTrip, ZmsKmmTripRepository, ZmsKmmRuntimeQuery<__covariant RowType>, ZmsKmmKodein_diDIModule, ZmsKmmKodein_diLazyDI, ZmsKmmRuntimeTransacterTransaction, ZmsKmmKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, ZmsKmmKotlinUnit, ZmsKmmKotlinArray<T>, ZmsKmmKotlinByteArray, ZmsKmmKodein_diDIDefinition<C, A, T>, ZmsKmmKotlinTriple<__covariant A, __covariant B, __covariant C>, ZmsKmmKodein_diSearchSpecs, ZmsKmmKotlinByteIterator, ZmsKmmKodein_diScopeRegistry, ZmsKmmKotlinKTypeProjection, ZmsKmmKodein_diDIDefining<C, A, T>, ZmsKmmKodein_diReference<__covariant T>, ZmsKmmKotlinKVariance, ZmsKmmKotlinEnum<E>;

@protocol ZmsKmmKodein_diDI, ZmsKmmKodein_diDIContext, ZmsKmmKodein_diDIAware, ZmsKmmZmsDb, ZmsKmmRuntimeTransactionWithoutReturn, ZmsKmmRuntimeTransactionWithReturn, ZmsKmmRuntimeTransacter, ZmsKmmTripPointQueries, ZmsKmmTripQueries, ZmsKmmRuntimeSqlDriver, ZmsKmmRuntimeSqlDriverSchema, ZmsKmmKotlinCoroutineContext, ZmsKmmKodein_diDIContainer, ZmsKmmKodein_typeTypeToken, ZmsKmmKotlinLazy, ZmsKmmRuntimeTransactionCallbacks, ZmsKmmRuntimeSqlCursor, ZmsKmmRuntimeQueryListener, ZmsKmmRuntimeSqlPreparedStatement, ZmsKmmRuntimeCloseable, ZmsKmmKotlinCoroutineContextElement, ZmsKmmKotlinCoroutineContextKey, ZmsKmmKodein_diDIBuilder, ZmsKmmKotlinKProperty, ZmsKmmKodein_diDITree, ZmsKmmKodein_diDIBuilderDirectBinder, ZmsKmmKodein_diDIBinding, ZmsKmmKodein_diDIBuilderTypeBinder, ZmsKmmKodein_diContextTranslator, ZmsKmmKodein_diDIBuilderConstantBinder, ZmsKmmKodein_diDirectDI, ZmsKmmKodein_diDIContainerBuilder, ZmsKmmKodein_diDIBindBuilder, ZmsKmmKodein_diScope, ZmsKmmKodein_diDIBindBuilderWithScope, ZmsKmmKotlinKType, ZmsKmmKotlinKAnnotatedElement, ZmsKmmKotlinKCallable, ZmsKmmKodein_diExternalSource, ZmsKmmKotlinIterator, ZmsKmmKodein_diDIBindingCopier, ZmsKmmKodein_diBindingDI, ZmsKmmKodein_diBinding, ZmsKmmKodein_diDirectDIAware, ZmsKmmKodein_diDirectDIBase, ZmsKmmKotlinKClassifier, ZmsKmmKodein_diWithContext, ZmsKmmKodein_diScopeCloseable, ZmsKmmKotlinComparable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface ZmsKmmBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface ZmsKmmBase (ZmsKmmBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface ZmsKmmMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface ZmsKmmMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorZmsKmmKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface ZmsKmmNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface ZmsKmmByte : ZmsKmmNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface ZmsKmmUByte : ZmsKmmNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface ZmsKmmShort : ZmsKmmNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface ZmsKmmUShort : ZmsKmmNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface ZmsKmmInt : ZmsKmmNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface ZmsKmmUInt : ZmsKmmNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface ZmsKmmLong : ZmsKmmNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface ZmsKmmULong : ZmsKmmNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface ZmsKmmFloat : ZmsKmmNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface ZmsKmmDouble : ZmsKmmNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface ZmsKmmBoolean : ZmsKmmNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface ZmsKmmGreeting : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface ZmsKmmPlatform : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol ZmsKmmKodein_diDIAware
@required
@property (readonly) id<ZmsKmmKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<ZmsKmmKodein_diDIContext> diContext __attribute__((swift_name("diContext")));
@property (readonly) ZmsKmmKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TripRepository")))
@interface ZmsKmmTripRepository : ZmsKmmBase <ZmsKmmKodein_diDIAware>
- (instancetype)initWithDi:(id<ZmsKmmKodein_diDI>)di __attribute__((swift_name("init(di:)"))) __attribute__((objc_designated_initializer));
- (void)addTripPointTrip_id:(NSString *)trip_id lat:(double)lat lon:(double)lon speed:(double)speed timestamp:(NSString *)timestamp __attribute__((swift_name("addTripPoint(trip_id:lat:lon:speed:timestamp:)")));
- (void)getTripPointsTrip_id:(NSString *)trip_id onTripPointsFetched:(void (^)(NSArray<ZmsKmmTrip_point *> *))onTripPointsFetched __attribute__((swift_name("getTripPoints(trip_id:onTripPointsFetched:)")));
- (void)getTripsOnTripsFetched:(void (^)(NSArray<ZmsKmmTrip *> *))onTripsFetched __attribute__((swift_name("getTrips(onTripsFetched:)")));
- (NSString *)startTrip __attribute__((swift_name("startTrip()")));
@property (readonly) id<ZmsKmmKodein_diDI> di __attribute__((swift_name("di")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIHelper")))
@interface ZmsKmmDIHelper : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ZmsKmmTripRepository *)getTripRepository __attribute__((swift_name("getTripRepository()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseProvider")))
@interface ZmsKmmDatabaseProvider : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<ZmsKmmZmsDb>)getZmsDatabase __attribute__((swift_name("getZmsDatabase()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trip")))
@interface ZmsKmmTrip : ZmsKmmBase
- (instancetype)initWithId:(NSString *)id started_at:(NSString * _Nullable)started_at __attribute__((swift_name("init(id:started_at:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (ZmsKmmTrip *)doCopyId:(NSString *)id started_at:(NSString * _Nullable)started_at __attribute__((swift_name("doCopy(id:started_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable started_at __attribute__((swift_name("started_at")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol ZmsKmmRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<ZmsKmmRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<ZmsKmmRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("TripPointQueries")))
@protocol ZmsKmmTripPointQueries <ZmsKmmRuntimeTransacter>
@required
@end;

__attribute__((swift_name("TripQueries")))
@protocol ZmsKmmTripQueries <ZmsKmmRuntimeTransacter>
@required
- (void)deleteALL __attribute__((swift_name("deleteALL()")));
- (void)insertTrip:(ZmsKmmTrip *)trip __attribute__((swift_name("insert(trip:)")));
- (void)insertTripPointTrip_id:(NSString *)trip_id lat:(double)lat lon:(double)lon speed:(ZmsKmmDouble * _Nullable)speed timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("insertTripPoint(trip_id:lat:lon:speed:timestamp:)")));
- (ZmsKmmRuntimeQuery<ZmsKmmTrip *> *)selectAll __attribute__((swift_name("selectAll()")));
- (ZmsKmmRuntimeQuery<id> *)selectAllMapper:(id (^)(NSString *, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (ZmsKmmRuntimeQuery<ZmsKmmTrip_point *> *)selectAllTripPointsTrip_id:(NSString *)trip_id __attribute__((swift_name("selectAllTripPoints(trip_id:)")));
- (ZmsKmmRuntimeQuery<id> *)selectAllTripPointsTrip_id:(NSString *)trip_id mapper:(id (^)(ZmsKmmLong *, NSString *, ZmsKmmDouble *, ZmsKmmDouble *, ZmsKmmDouble * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllTripPoints(trip_id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trip_point")))
@interface ZmsKmmTrip_point : ZmsKmmBase
- (instancetype)initWithId:(int64_t)id trip_id:(NSString *)trip_id lat:(double)lat lon:(double)lon speed:(ZmsKmmDouble * _Nullable)speed timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(id:trip_id:lat:lon:speed:timestamp:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (ZmsKmmDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (ZmsKmmTrip_point *)doCopyId:(int64_t)id trip_id:(NSString *)trip_id lat:(double)lat lon:(double)lon speed:(ZmsKmmDouble * _Nullable)speed timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("doCopy(id:trip_id:lat:lon:speed:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lon __attribute__((swift_name("lon")));
@property (readonly) ZmsKmmDouble * _Nullable speed __attribute__((swift_name("speed")));
@property (readonly) NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *trip_id __attribute__((swift_name("trip_id")));
@end;

__attribute__((swift_name("ZmsDb")))
@protocol ZmsKmmZmsDb <ZmsKmmRuntimeTransacter>
@required
@property (readonly) id<ZmsKmmTripPointQueries> tripPointQueries __attribute__((swift_name("tripPointQueries")));
@property (readonly) id<ZmsKmmTripQueries> tripQueries __attribute__((swift_name("tripQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZmsDbCompanion")))
@interface ZmsKmmZmsDbCompanion : ZmsKmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<ZmsKmmZmsDb>)invokeDriver:(id<ZmsKmmRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<ZmsKmmRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstantsKt")))
@interface ZmsKmmConstantsKt : ZmsKmmBase
@property (class, readonly) NSString *DATABASE_NAME __attribute__((swift_name("DATABASE_NAME")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchersKt")))
@interface ZmsKmmDispatchersKt : ZmsKmmBase
@property (class, readonly) id<ZmsKmmKotlinCoroutineContext> defaultDispatcher __attribute__((swift_name("defaultDispatcher")));
@property (class, readonly) id<ZmsKmmKotlinCoroutineContext> ioDispatcher __attribute__((swift_name("ioDispatcher")));
@property (class, readonly) id<ZmsKmmKotlinCoroutineContext> uiDispatcher __attribute__((swift_name("uiDispatcher")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseModuleKt")))
@interface ZmsKmmDatabaseModuleKt : ZmsKmmBase
@property (class, readonly) ZmsKmmKodein_diDIModule *databaseModule __attribute__((swift_name("databaseModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DIContainerKt")))
@interface ZmsKmmDIContainerKt : ZmsKmmBase
@property (class, readonly) ZmsKmmKodein_diLazyDI *di __attribute__((swift_name("di")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositoryModuleKt")))
@interface ZmsKmmRepositoryModuleKt : ZmsKmmBase
@property (class, readonly) ZmsKmmKodein_diDIModule *repositoryModule __attribute__((swift_name("repositoryModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverKt")))
@interface ZmsKmmDatabaseDriverKt : ZmsKmmBase
@property (class, readonly) id<ZmsKmmRuntimeSqlDriver> databaseDriver __attribute__((swift_name("databaseDriver")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol ZmsKmmKodein_diDI <ZmsKmmKodein_diDIAware>
@required
@property (readonly) id<ZmsKmmKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@protocol ZmsKmmKodein_diDIContext
@required
@property (readonly) id<ZmsKmmKodein_typeTypeToken> type __attribute__((swift_name("type")));
@property (readonly) id value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface ZmsKmmKodein_diDITrigger : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<ZmsKmmKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol ZmsKmmRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol ZmsKmmRuntimeTransactionWithoutReturn <ZmsKmmRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<ZmsKmmRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol ZmsKmmRuntimeTransactionWithReturn <ZmsKmmRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<ZmsKmmRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface ZmsKmmRuntimeQuery<__covariant RowType> : ZmsKmmBase
- (instancetype)initWithQueries:(NSMutableArray<ZmsKmmRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<ZmsKmmRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<ZmsKmmRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<ZmsKmmRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<ZmsKmmRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<ZmsKmmRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol ZmsKmmRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol ZmsKmmRuntimeSqlDriver <ZmsKmmRuntimeCloseable>
@required
- (ZmsKmmRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(ZmsKmmInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ZmsKmmRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<ZmsKmmRuntimeSqlCursor>)executeQueryIdentifier:(ZmsKmmInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<ZmsKmmRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (ZmsKmmRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol ZmsKmmRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<ZmsKmmRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<ZmsKmmRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol ZmsKmmKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<ZmsKmmKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<ZmsKmmKotlinCoroutineContextElement> _Nullable)getKey:(id<ZmsKmmKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<ZmsKmmKotlinCoroutineContext>)minusKeyKey:(id<ZmsKmmKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<ZmsKmmKotlinCoroutineContext>)plusContext:(id<ZmsKmmKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface ZmsKmmKodein_diDIModule : ZmsKmmBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<ZmsKmmKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<ZmsKmmKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (void (^)(id<ZmsKmmKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()")));
- (ZmsKmmKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<ZmsKmmKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<ZmsKmmKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diLazyDI")))
@interface ZmsKmmKodein_diLazyDI : ZmsKmmBase <ZmsKmmKodein_diDI>
- (instancetype)initWithF:(id<ZmsKmmKodein_diDI> (^)(void))f __attribute__((swift_name("init(f:)"))) __attribute__((objc_designated_initializer));
- (ZmsKmmKodein_diLazyDI *)getValueThisRef:(id _Nullable)thisRef property:(id<ZmsKmmKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
@property (readonly) id<ZmsKmmKodein_diDI> baseDI __attribute__((swift_name("baseDI")));
@property (readonly) id<ZmsKmmKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol ZmsKmmKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(ZmsKmmKodein_diDIKey<id, ZmsKmmKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(ZmsKmmKodein_diDIKey<id, ZmsKmmKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(ZmsKmmKodein_diDIKey<id, ZmsKmmKotlinUnit *, id> *)key context:(id)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<ZmsKmmKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@protocol ZmsKmmKodein_typeTypeToken
@required
- (ZmsKmmKotlinArray<id<ZmsKmmKodein_typeTypeToken>> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (id<ZmsKmmKodein_typeTypeToken>)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<id<ZmsKmmKodein_typeTypeToken>> *)getSuper __attribute__((swift_name("getSuper()")));
- (BOOL)isAssignableFromTypeToken:(id<ZmsKmmKodein_typeTypeToken>)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol ZmsKmmKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol ZmsKmmRuntimeSqlCursor <ZmsKmmRuntimeCloseable>
@required
- (ZmsKmmKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (ZmsKmmDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (ZmsKmmLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol ZmsKmmRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface ZmsKmmRuntimeTransacterTransaction : ZmsKmmBase <ZmsKmmRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) ZmsKmmRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol ZmsKmmRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(ZmsKmmKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(ZmsKmmDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(ZmsKmmLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol ZmsKmmKotlinCoroutineContextElement <ZmsKmmKotlinCoroutineContext>
@required
@property (readonly) id<ZmsKmmKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol ZmsKmmKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol ZmsKmmKodein_diDIBindBuilder
@required
@property (readonly) id<ZmsKmmKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) BOOL explicitContext __attribute__((swift_name("explicitContext")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol ZmsKmmKodein_diDIBindBuilderWithScope <ZmsKmmKodein_diDIBindBuilder>
@required
@property (readonly) id<ZmsKmmKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol ZmsKmmKodein_diDIBuilder <ZmsKmmKodein_diDIBindBuilder, ZmsKmmKodein_diDIBindBuilderWithScope>
@required
- (id<ZmsKmmKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(ZmsKmmBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (void)BindTag:(id _Nullable)tag overrides:(ZmsKmmBoolean * _Nullable)overrides binding:(id<ZmsKmmKodein_diDIBinding>)binding __attribute__((swift_name("Bind(tag:overrides:binding:)")));
- (id<ZmsKmmKodein_diDIBuilderTypeBinder>)BindType:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag overrides:(ZmsKmmBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)BindSetTag:(id _Nullable)tag overrides:(ZmsKmmBoolean * _Nullable)overrides binding:(id<ZmsKmmKodein_diDIBinding>)binding __attribute__((swift_name("BindSet(tag:overrides:binding:)")));
- (void)RegisterContextTranslatorTranslator:(id<ZmsKmmKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<ZmsKmmKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(ZmsKmmBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(ZmsKmmKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(ZmsKmmKotlinArray<ZmsKmmKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(ZmsKmmKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<ZmsKmmKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<ZmsKmmKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol ZmsKmmKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKCallable")))
@protocol ZmsKmmKotlinKCallable <ZmsKmmKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<ZmsKmmKotlinKType> returnType __attribute__((swift_name("returnType")));
@end;

__attribute__((swift_name("KotlinKProperty")))
@protocol ZmsKmmKotlinKProperty <ZmsKmmKotlinKCallable>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface ZmsKmmKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : ZmsKmmBase
- (instancetype)initWithContextType:(id<ZmsKmmKodein_typeTypeToken>)contextType argType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (id<ZmsKmmKodein_typeTypeToken>)component1 __attribute__((swift_name("component1()")));
- (id<ZmsKmmKodein_typeTypeToken>)component2 __attribute__((swift_name("component2()")));
- (id<ZmsKmmKodein_typeTypeToken>)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (ZmsKmmKodein_diDIKey<C, A, T> *)doCopyContextType:(id<ZmsKmmKodein_typeTypeToken>)contextType argType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface ZmsKmmKotlinUnit : ZmsKmmBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol ZmsKmmKodein_diDITree
@required
- (NSArray<ZmsKmmKotlinTriple<ZmsKmmKodein_diDIKey<id, id, id> *, ZmsKmmKodein_diDIDefinition<id, id, id> *, id<ZmsKmmKodein_diContextTranslator>> *> *)findKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<ZmsKmmKotlinTriple<ZmsKmmKodein_diDIKey<id, id, id> *, NSArray<ZmsKmmKodein_diDIDefinition<id, id, id> *> *, id<ZmsKmmKodein_diContextTranslator>> *> *)findSearch:(ZmsKmmKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (ZmsKmmKotlinTriple<ZmsKmmKodein_diDIKey<id, id, id> *, NSArray<ZmsKmmKodein_diDIDefinition<id, id, id> *> *, id<ZmsKmmKodein_diContextTranslator>> * _Nullable)getKey_:(ZmsKmmKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key_:)")));
@property (readonly) NSDictionary<ZmsKmmKodein_diDIKey<id, id, id> *, NSArray<ZmsKmmKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<ZmsKmmKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<ZmsKmmKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface ZmsKmmKotlinArray<T> : ZmsKmmBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(ZmsKmmInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<ZmsKmmKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface ZmsKmmKotlinByteArray : ZmsKmmBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(ZmsKmmByte *(^)(ZmsKmmInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (ZmsKmmKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol ZmsKmmKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<ZmsKmmKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)"))) __attribute__((deprecated("'bind() fron [BINDING]' might be replace by 'bind { [BINDING] }' (This will be remove in Kodein-DI 8.0)")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol ZmsKmmKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key di:(id<ZmsKmmKodein_diBindingDI>)di __attribute__((swift_name("getFactory(key:di:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol ZmsKmmKodein_diDIBinding <ZmsKmmKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> argType __attribute__((swift_name("argType")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<ZmsKmmKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<ZmsKmmKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol ZmsKmmKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<ZmsKmmKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol ZmsKmmKodein_diContextTranslator
@required
- (id _Nullable)translateDi:(id<ZmsKmmKodein_diDirectDI>)di ctx:(id)ctx __attribute__((swift_name("translate(di:ctx:)")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> contextType __attribute__((swift_name("contextType")));
@property (readonly) id<ZmsKmmKodein_typeTypeToken> scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol ZmsKmmKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(id<ZmsKmmKodein_typeTypeToken>)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol ZmsKmmKodein_diDirectDIAware
@required
@property (readonly) id<ZmsKmmKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol ZmsKmmKodein_diDirectDIBase <ZmsKmmKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<ZmsKmmKodein_diDirectDI>)OnContext:(id<ZmsKmmKodein_diDIContext>)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(id<ZmsKmmKodein_typeTypeToken>)argType type:(id<ZmsKmmKodein_typeTypeToken>)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<ZmsKmmKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<ZmsKmmKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<ZmsKmmKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol ZmsKmmKodein_diDirectDI <ZmsKmmKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol ZmsKmmKodein_diDIContainerBuilder
@required
- (void)bindKey:(ZmsKmmKodein_diDIKey<id, id, id> *)key binding:(id<ZmsKmmKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(ZmsKmmBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<ZmsKmmKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<ZmsKmmKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<ZmsKmmKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<ZmsKmmKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<ZmsKmmKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol ZmsKmmKodein_diScope
@required
- (ZmsKmmKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol ZmsKmmKotlinKType
@required
@property (readonly) NSArray<ZmsKmmKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<ZmsKmmKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface ZmsKmmKodein_diDIDefining<C, A, T> : ZmsKmmBase
- (instancetype)initWithBinding:(id<ZmsKmmKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<ZmsKmmKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface ZmsKmmKodein_diDIDefinition<C, A, T> : ZmsKmmKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<ZmsKmmKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<ZmsKmmKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<ZmsKmmKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<ZmsKmmKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface ZmsKmmKotlinTriple<__covariant A, __covariant B, __covariant C> : ZmsKmmBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (C _Nullable)component3 __attribute__((swift_name("component3()")));
- (ZmsKmmKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface ZmsKmmKodein_diSearchSpecs : ZmsKmmBase
- (instancetype)initWithContextType:(id<ZmsKmmKodein_typeTypeToken> _Nullable)contextType argType:(id<ZmsKmmKodein_typeTypeToken> _Nullable)argType type:(id<ZmsKmmKodein_typeTypeToken> _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property id<ZmsKmmKodein_typeTypeToken> _Nullable argType __attribute__((swift_name("argType")));
@property id<ZmsKmmKodein_typeTypeToken> _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property id<ZmsKmmKodein_typeTypeToken> _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol ZmsKmmKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<ZmsKmmKodein_diBindingDI>)di key:(ZmsKmmKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol ZmsKmmKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface ZmsKmmKotlinByteIterator : ZmsKmmBase <ZmsKmmKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (ZmsKmmByte *)next_ __attribute__((swift_name("next_()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol ZmsKmmKodein_diDIBindingCopier
@required
- (id<ZmsKmmKodein_diDIBinding>)doCopyBuilder:(id<ZmsKmmKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol ZmsKmmKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol ZmsKmmKodein_diBindingDI <ZmsKmmKodein_diDirectDI, ZmsKmmKodein_diWithContext>
@required
- (id<ZmsKmmKodein_diBindingDI>)onErasedContext __attribute__((swift_name("onErasedContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol ZmsKmmKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface ZmsKmmKodein_diScopeRegistry : ZmsKmmBase <ZmsKmmKodein_diScopeCloseable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(ZmsKmmKodein_diReference<id> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id _Nullable (^ _Nullable)(void))getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface ZmsKmmKotlinKTypeProjection : ZmsKmmBase
- (instancetype)initWithVariance:(ZmsKmmKotlinKVariance * _Nullable)variance type:(id<ZmsKmmKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
- (ZmsKmmKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<ZmsKmmKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (ZmsKmmKotlinKTypeProjection *)doCopyVariance:(ZmsKmmKotlinKVariance * _Nullable)variance type:(id<ZmsKmmKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<ZmsKmmKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) ZmsKmmKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol ZmsKmmKotlinKClassifier
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReference")))
@interface ZmsKmmKodein_diReference<__covariant T> : ZmsKmmBase
- (instancetype)initWithCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("init(current:next:)"))) __attribute__((objc_designated_initializer));
- (T)component1 __attribute__((swift_name("component1()")));
- (T _Nullable (^)(void))component2 __attribute__((swift_name("component2()")));
- (ZmsKmmKodein_diReference<T> *)doCopyCurrent:(T)current next:(T _Nullable (^)(void))next __attribute__((swift_name("doCopy(current:next:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T current __attribute__((swift_name("current")));
@property (readonly) T _Nullable (^next)(void) __attribute__((swift_name("next")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol ZmsKmmKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface ZmsKmmKotlinEnum<E> : ZmsKmmBase <ZmsKmmKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface ZmsKmmKotlinKVariance : ZmsKmmKotlinEnum<ZmsKmmKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) ZmsKmmKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) ZmsKmmKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) ZmsKmmKotlinKVariance *out __attribute__((swift_name("out")));
+ (ZmsKmmKotlinArray<ZmsKmmKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
