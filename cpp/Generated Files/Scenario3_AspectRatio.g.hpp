﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "Scenario3_AspectRatio.xaml.h"

void ::SDKTemplate::Scenario3_AspectRatio::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///Scenario3_AspectRatio.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::SDKTemplate::Scenario3_AspectRatio::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->RootGrid = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
            }
            break;
        case 2:
            {
                ::Windows::UI::Xaml::Controls::Button^ element2 = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(element2))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::SDKTemplate::Scenario3_AspectRatio::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&Scenario3_AspectRatio::InitializeCameraButton_Tapped);
            }
            break;
        case 3:
            {
                this->PreviewControl = safe_cast<::Windows::UI::Xaml::Controls::CaptureElement^>(__target);
            }
            break;
        case 4:
            {
                this->PreviewSettings = safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(this->PreviewSettings))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::SDKTemplate::Scenario3_AspectRatio::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&Scenario3_AspectRatio::PreviewSettings_Changed);
            }
            break;
        case 5:
            {
                this->VideoSettings = safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::ComboBox^>(this->VideoSettings))->SelectionChanged += ref new ::Windows::UI::Xaml::Controls::SelectionChangedEventHandler(this, (void (::SDKTemplate::Scenario3_AspectRatio::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Controls::SelectionChangedEventArgs^))&Scenario3_AspectRatio::VideoSettings_Changed);
            }
            break;
        case 6:
            {
                this->VideoButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->VideoButton))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::SDKTemplate::Scenario3_AspectRatio::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&Scenario3_AspectRatio::VideoButton_Tapped);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::SDKTemplate::Scenario3_AspectRatio::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


