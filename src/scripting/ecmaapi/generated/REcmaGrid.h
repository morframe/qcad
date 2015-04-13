// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGRID_H
        #define RECMAGRID_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RGrid.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaGrid {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        clearCache
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        snapToGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        update
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintMetaGrid
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        paintRuler
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getInfoText
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getViewportNumber
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDocument
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        isVisible
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGrid* getSelf(const QString& fName, QScriptContext* context)
    ;static RGrid* getSelfShell(const QString& fName, QScriptContext* context)
    ;};
    #endif
    