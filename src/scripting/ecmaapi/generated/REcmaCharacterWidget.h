// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMACHARACTERWIDGET_H
        #define RECMACHARACTERWIDGET_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RCharacterWidget.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaCharacterWidget {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue create(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQWidget(QScriptContext *context,
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
        sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getDisplayFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFont
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateSize
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateStyle
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        updateFontMerging
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RCharacterWidget* getSelf(const QString& fName, QScriptContext* context)
    ;static RCharacterWidget* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RCharacterWidget*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RCharacterWidget*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RCharacterWidget*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    