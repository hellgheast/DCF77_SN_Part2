﻿//------------------------------------------------------------------------------
// <auto-generated>
//     Ce code a été généré par un outil.
//     Version du runtime :4.0.30319.239
//
//     Les modifications apportées à ce fichier peuvent provoquer un comportement incorrect et seront perdues si
//     le code est régénéré.
// </auto-generated>
//------------------------------------------------------------------------------

namespace Austin.PicoCompile.Properties {
    using System;
    
    
    /// <summary>
    ///   Une classe de ressource fortement typée destinée, entre autres, à la consultation des chaînes localisées.
    /// </summary>
    // Cette classe a été générée automatiquement par la classe StronglyTypedResourceBuilder
    // à l'aide d'un outil, tel que ResGen ou Visual Studio.
    // Pour ajouter ou supprimer un membre, modifiez votre fichier .ResX, puis réexécutez ResGen
    // avec l'option /str ou régénérez votre projet VS.
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("System.Resources.Tools.StronglyTypedResourceBuilder", "4.0.0.0")]
    [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    internal class Resources {
        
        private static global::System.Resources.ResourceManager resourceMan;
        
        private static global::System.Globalization.CultureInfo resourceCulture;
        
        [global::System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal Resources() {
        }
        
        /// <summary>
        ///   Retourne l'instance ResourceManager mise en cache utilisée par cette classe.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Resources.ResourceManager ResourceManager {
            get {
                if (object.ReferenceEquals(resourceMan, null)) {
                    global::System.Resources.ResourceManager temp = new global::System.Resources.ResourceManager("Austin.PicoCompile.Properties.Resources", typeof(Resources).Assembly);
                    resourceMan = temp;
                }
                return resourceMan;
            }
        }
        
        /// <summary>
        ///   Remplace la propriété CurrentUICulture du thread actuel pour toutes
        ///   les recherches de ressources à l'aide de cette classe de ressource fortement typée.
        /// </summary>
        [global::System.ComponentModel.EditorBrowsableAttribute(global::System.ComponentModel.EditorBrowsableState.Advanced)]
        internal static global::System.Globalization.CultureInfo Culture {
            get {
                return resourceCulture;
            }
            set {
                resourceCulture = value;
            }
        }
        
        /// <summary>
        ///   Recherche une chaîne localisée semblable à component_name={name};
        ///width_a=18;
        ///depth_a=1024;
        ///configuration_port_a=read_only;
        ///port_a_enable_pin=false;
        ///port_a_handshaking_pins=false;
        ///port_a_register_inputs=false;
        ///port_a_init_pin=false;
        ///port_a_init_value=00000;
        ///port_a_additional_output_pipe_stages = 0;
        ///port_a_register_inputs = false;
        ///port_a_active_clock_edge = Rising_Edge_Triggered;
        ///width_b=18;
        ///depth_b=1024;
        ///configuration_port_b=read_and_write;
        ///write_mode_port_b=read_after_write;
        ///port_b_enable_pin=false;
        ///port_b_handshaking_pins=false;
        ///port_b_register_in [le reste de la chaîne a été tronqué]&quot;;.
        /// </summary>
        internal static string ROM_form_coe {
            get {
                return ResourceManager.GetString("ROM_form_coe", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Recherche une chaîne localisée semblable à ////////////////////////////////////////////////////////////////////////////////
        ///// Copyright (c) 2004 Xilinx, Inc.
        ///// All Rights Reserved
        ///////////////////////////////////////////////////////////////////////////////////
        /////   ____  ____
        /////  /   /\/   /
        ///// /___/  \  /    Vendor: Xilinx
        ///// \   \   \/     Version: 1.02
        /////  \   \         Filename: ROM_form.v
        /////  /   /         Date Last Modified:  September 7 2004
        ///// /___/   /\     Date Created: July 2003
        ///// \   \  /  \
        /////  \___\/\___\
        /////
        /////Device:  	Xilinx
        /////Pur [le reste de la chaîne a été tronqué]&quot;;.
        /// </summary>
        internal static string ROM_form_v {
            get {
                return ResourceManager.GetString("ROM_form_v", resourceCulture);
            }
        }
        
        /// <summary>
        ///   Recherche une chaîne localisée semblable à ROM_form.vhd
        ///
        ///Ken Chapman (Xilinx Ltd) July 2003
        ///Minor modifications by Austin Wise December 2009
        ///
        ///This is the VHDL template file for the KCPSM3 assembler.
        ///It is used to configure a Spartan-3, Virtex-II or Virtex-IIPRO block RAM to act as 
        ///a single port program ROM.
        ///
        ///This VHDL file is not valid as input directly into a synthesis or simulation tool.
        ///The assembler will read this template and insert the data required to complete the 
        ///definition of program ROM and write it out to a new &apos;.vhd&apos; file associated wi [le reste de la chaîne a été tronqué]&quot;;.
        /// </summary>
        internal static string ROM_form_vhd {
            get {
                return ResourceManager.GetString("ROM_form_vhd", resourceCulture);
            }
        }
    }
}
