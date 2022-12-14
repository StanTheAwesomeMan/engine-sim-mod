#ifndef PIRANHA_PIRANHA_H
#define PIRANHA_PIRANHA_H

#define PIRANHA_DIST

#include "add_operation_output.h"
#include "assembly.h"
#include "bool_negate_operation.h"
#include "build_settings.h"
#include "channel_node.h"
#include "channel_type.h"
#include "compilation_error.h"
#include "compiler.h"
#include "console_input_node.h"
#include "console_output_node.h"
#include "default_literal_node.h"
#include "divide_operation_output.h"
#include "error_list.h"
#include "exceptions.h"
#include "float_conversions.h"
#include "fundamental_output.h"
#include "fundamental_types.h"
#include "int_conversions.h"
#include "int_probe.h"
#include "ir_attribute.h"
#include "ir_attribute_definition.h"
#include "ir_attribute_definition_list.h"
#include "ir_attribute_list.h"
#include "ir_binary_operator.h"
#include "ir_compilation_unit.h"
#include "ir_context_tree.h"
#include "ir_import_statement.h"
#include "ir_literal_node.h"
#include "ir_node.h"
#include "ir_node_definition.h"
#include "ir_parser_structure.h"
#include "ir_structure_list.h"
#include "ir_token_info.h"
#include "ir_unary_operator.h"
#include "ir_value.h"
#include "ir_value_constant.h"
#include "ir_visibility.h"
#include "key_value_lookup.h"
#include "language_rules.h"
#include "literal_node.h"
#include "literal_node_output.h"
#include "memory_management.h"
#include "memory_tracker.h"
#include "multiply_operation_output.h"
#include "node.h"
#include "node_allocator.h"
#include "node_container.h"
#include "node_graph.h"
#include "node_output.h"
#include "node_program.h"
#include "no_op_node.h"
#include "num_negate_operation.h"
#include "operation_node.h"
#include "path.h"
#include "pipe_node.h"
#include "pkey_value_lookup.h"
#include "rule.h"
#include "standard_allocator.h"
#include "string_conversions.h"
#include "subtract_operation_output.h"
#include "throw_runtime_error_node.h"
#include "vector_constructor.h"
#include "vector_output.h"
#include "vector_split.h"
#include "vector_split_node.h"
#include "version.h"

#endif /* PIRANHA_PIRANHA_H */
