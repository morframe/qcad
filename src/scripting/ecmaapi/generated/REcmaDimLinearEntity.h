// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMADIMLINEARENTITY_H
        #define RECMADIMLINEARENTITY_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RDimLinearEntity.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaDimLinearEntity {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getRDimensionEntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getREntity(QScriptContext *context,
            QScriptEngine *engine)
        ;static  QScriptValue getRObject(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        init
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getProperty
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getData
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionPoint1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionPoint1
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setExtensionPoint2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getExtensionPoint2
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RDimLinearEntity* getSelf(const QString& fName, QScriptContext* context)
    ;static RDimLinearEntity* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    