#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class ZmsKmmTrip_point, ZmsKmmTrip, ZmsKmmRuntimeQuery<__covariant RowType>, ZmsKmmRuntimeTransacterTransaction, ZmsKmmKotlinByteArray, ZmsKmmKotlinByteIterator;

@protocol ZmsKmmZmsDb, ZmsKmmRuntimeTransactionWithoutReturn, ZmsKmmRuntimeTransactionWithReturn, ZmsKmmRuntimeTransacter, ZmsKmmTripPointQueries, ZmsKmmTripQueries, ZmsKmmRuntimeSqlDriver, ZmsKmmRuntimeSqlDriverSchema, ZmsKmmKotlinCoroutineContext, ZmsKmmRuntimeTransactionCallbacks, ZmsKmmRuntimeSqlCursor, ZmsKmmRuntimeQueryListener, ZmsKmmRuntimeSqlPreparedStatement, ZmsKmmRuntimeCloseable, ZmsKmmKotlinCoroutineContextElement, ZmsKmmKotlinCoroutineContextKey, ZmsKmmKotlinIterator;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TripRepository")))
@interface ZmsKmmTripRepository : ZmsKmmBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addTripPointTrip_id:(NSString *)trip_id lat:(double)lat lon:(double)lon speed:(double)speed timestamp:(NSString *)timestamp __attribute__((swift_name("addTripPoint(trip_id:lat:lon:speed:timestamp:)")));
- (void)getTripPointsTrip_id:(NSString *)trip_id onTripPointsFetched:(void (^)(NSArray<ZmsKmmTrip_point *> *))onTripPointsFetched __attribute__((swift_name("getTripPoints(trip_id:onTripPointsFetched:)")));
- (void)getTripsOnTripsFetched:(void (^)(NSArray<ZmsKmmTrip *> *))onTripsFetched __attribute__((swift_name("getTrips(onTripsFetched:)")));
- (NSString *)startTrip __attribute__((swift_name("startTrip()")));
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
__attribute__((swift_name("DatabaseDriverKt")))
@interface ZmsKmmDatabaseDriverKt : ZmsKmmBase
@property (class, readonly) id<ZmsKmmRuntimeSqlDriver> databaseDriver __attribute__((swift_name("databaseDriver")));
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

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
