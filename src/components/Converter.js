import React, { useState } from "react";

const Converter = () => {
  const [input, setInput] = useState("");
  const [base, setBase] = useState("decimal");

  const baseMap = { binary: 2, octal: 8, decimal: 10, hexadecimal: 16 };

  const convert = (value, fromBase) => {
    try {
      const decimal = parseInt(value, baseMap[fromBase]);
      if (isNaN(decimal)) return {};
      return {
        binary: decimal.toString(2),
        octal: decimal.toString(8),
        decimal: decimal.toString(10),
        hexadecimal: decimal.toString(16).toUpperCase(),
      };
    } catch {
      return {};
    }
  };

  const results = convert(input, base);

  return (
    <div className="converter">
      <h2>Convert Between Number Systems</h2>

      <div className="input-section">
        <input
          type="text"
          placeholder={`Enter ${base} number`}
          value={input}
          onChange={(e) => setInput(e.target.value)}
        />

        <select value={base} onChange={(e) => setBase(e.target.value)}>
          <option value="binary">Binary</option>
          <option value="octal">Octal</option>
          <option value="decimal">Decimal</option>
          <option value="hexadecimal">Hexadecimal</option>
        </select>
      </div>

      {input && (
        <div className="results">
          <div className="result-card">
            <strong>Binary:</strong> {results.binary || "Invalid input"}
          </div>
          <div className="result-card">
            <strong>Octal:</strong> {results.octal || "Invalid input"}
          </div>
          <div className="result-card">
            <strong>Decimal:</strong> {results.decimal || "Invalid input"}
          </div>
          <div className="result-card">
            <strong>Hexadecimal:</strong> {results.hexadecimal || "Invalid input"}
          </div>
        </div>
      )}
    </div>
  );
};

export default Converter;
